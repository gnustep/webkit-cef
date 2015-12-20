/*
   Project: WebKit-CEF

   Copyright (C) 2007, 2015 Free Software Foundation

   Author: Dr. H. Nikolaus Schaller
   Author: Gregory John Casamento (Integration with CEF)

   Created: 2015-12-07 14:42:05 -0500 by heron

   This application is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This application is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _WEBVIEW_H_
#define _WEBVIEW_H_

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

/// #import <WebKit/WebFrameLoadDelegate.h>
/// #import <WebKit/WebResourceLoadDelegate.h>
/// #import <WebKit/WebDownload.h>
/// #import <WebKit/WebEditingDelegate.h>
/// #import <WebKit/WebPolicyDelegate.h>
/// #import <WebKit/WebUIDelegate.h>
/// #import <WebKit/WebPreferences.h>

/*
@class WebBackForwardList, WebHistoryItem;
*/

@class WebView;

/*
@class WebFrame;
@class WebArchive;
@class WebScriptObject;

@class DOMCSSStyleDeclaration;
@class DOMElement;
@class DOMNode;
@class DOMRange;
*/
extern NSString *WebElementDOMNodeKey;
extern NSString *WebElementFrameKey;
extern NSString *WebElementImageAltStringKey;
extern NSString *WebElementImageKey;
extern NSString *WebElementImageRectKey;
extern NSString *WebElementImageURLKey;
extern NSString *WebElementIsSelectedKey;
extern NSString *WebElementLinkURLKey;
extern NSString *WebElementLinkTargetFrameKey;
extern NSString *WebElementLinkTitleKey;
extern NSString *WebElementLinkLabelKey;

extern NSString *WebViewDidBeginEditingNotification;
extern NSString *WebViewDidChangeNotification;
extern NSString *WebViewDidChangeSelectionNotification;
extern NSString *WebViewDidChangeTypingStyleNotification;
extern NSString *WebViewDidEndEditingNotification;
extern NSString *WebViewProgressEstimateChangedNotification;
extern NSString *WebViewProgressFinishedNotification;
extern NSString *WebViewProgressStartedNotification;

@interface WebView : NSView
{
	id /* WebFrame * */ _mainFrame;
	NSString *_groupName;
	id /* WebBackForwardList * */ _backForwardList;
	id /* WebPreferences * */ _preferences;
	NSWindow *_hostWindow;
	NSString *_applicationName;
	NSString *_customTextEncoding;
	NSString *_customAgent;
	NSString *_mediaStyle;
	NSString *_preferencesIdentifier;
	id /* DOMCSSStyleDeclaration * */ _typingStyle;
	id /* WebScriptObject * */ _global;
	id _downloadDelegate;
	id _editingDelegate;
	id /*<WebFrameLoadDelegate>*/ _frameLoadDelegate;
	id _policyDelegate;
	id /*<WebResourceLoadDelegate>*/_resourceLoadDelegate;
	id /*<WebUIDelegate>*/ _uiDelegate;
	float _textSizeMultiplier;
	BOOL _continuousSpellChecking;
	BOOL _editable;
	BOOL _smartInsertDelete;
	BOOL _maintainsBackForwardList;
	BOOL _drawsBackground;
}

+ (BOOL) canShowMIMEType:(NSString *) type;
+ (BOOL) canShowMIMETypeAsHTML:(NSString *) type;
+ (NSArray *) MIMETypesShownAsHTML;
+ (void) registerViewClass:(Class) class representationClass:(Class) repClass forMIMEType:(NSString *) type;
+ (void) setMIMETypesShownAsHTML:(NSArray *) type;
+ (NSURL *) URLFromPasteboard:(NSPasteboard *) pasteboard;
+ (NSString *) URLTitleFromPasteboard:(NSPasteboard *) pasteboard;

/* Actions */
- (IBAction) stopLoading:(id) sender;
- (IBAction) goBack:(id) sender;
- (IBAction) goForward:(id) sender;
- (IBAction) makeTextLarger:(id) sender;
- (IBAction) makeTextSmaller:(id) sender;
- (IBAction) reload:(id) sender;
- (IBAction) takeStringURLFrom:(id) sender; // anything responding to -stringValue

/* Other methods */
- (void) alignCenter:(id) sender;
- (void) alignJustified:(id) sender;
- (void) alignLeft:(id) sender;
- (void) alignRight:(id) sender;
- (NSString *) applicationNameForUserAgent;
- (void) applyStyle:(id) /* DOMCSSStyleDeclaration * */ style;
- (id) /* WebBackForwardList * */ backForwardList;
- (BOOL) canGoBack;
- (BOOL) canGoForward;
- (BOOL) canMakeTextLarger;
- (BOOL) canMakeTextSmaller;
- (void) changeAttributes:(id) sender;
- (void) changeColor:(id) sender;
- (void) changeDocumentBackgroundColor:(id) sender;
- (void) changeFont:(id) sender;
- (void) checkSpelling:(id) sender;
- (id) /*DOMCSSStyleDeclaration * */ computedStyleForElement:(id) /*DOMElement */ element
                                       pseudoElement:(NSString *)pseudoElement;
- (void) copy:(id) sender;
- (void) copyFont:(id) sender;
- (NSString *) customTextEncodingName;
- (NSString *) customUserAgent;
- (void) cut:(id) sender;
- (void) delete:(id) sender;
- (void) deleteSelection;
- (id) downloadDelegate;
- (id) /* DOMRange * */ editableDOMRangeForPoint:(NSPoint) point;
- (id) editingDelegate;
- (NSDictionary *) elementAtPoint:(NSPoint) point;
- (double) estimatedProgress;
- (id) frameLoadDelegate;	// uses informal WebFrameLoadDelegate protocol
- (BOOL) goBack;
- (BOOL) goForward;
- (BOOL) goToBackForwardItem: (id) /*(WebHistoryItem *)*/ item;
- (NSString *) groupName;
- (NSWindow *) hostWindow;
- (id) initWithFrame:(NSRect) rect frameName:(NSString *) name groupName:(NSString *) group;
- (BOOL) isContinuousSpellCheckingEnabled;
- (BOOL) isEditable;
- (id) /* WebFrame * */ mainFrame;
- (NSString *) mediaStyle;
- (void) moveDragCaretToPoint:(NSPoint) point;
- (void) paste:(id) sender;
- (void) pasteAsPlainText:(id) sender;
- (void) pasteAsRichText:(id) sender;
- (NSArray *) pasteboardTypesForElement:(NSDictionary *) element;
- (NSArray *) pasteboardTypesForSelection;
- (void) pasteFont:(id) sender;
- (void) performFindPanelAction:(id) sender;
- (id) policyDelegate;
- (id) /* WebPreferences * */ preferences;
- (NSString *) preferencesIdentifier;
- (void) removeDragCaret;
- (void) replaceSelectionWithArchive: (id) /*(WebArchive *)*/ archive;
- (void) replaceSelectionWithMarkupString:(NSString *) string;
- (void) replaceSelectionWithNode:(id) /* (DOMNode *) */ node;
- (void) replaceSelectionWithText:(NSString *) text;
- (id) resourceLoadDelegate;
- (BOOL) searchFor:(NSString *) string direction:(BOOL) forward caseSensitive:(BOOL) flag wrap:(BOOL) wrap;
- (id) /* DOMRange * */ selectedDOMRange;
- (NSSelectionAffinity) selectionAffinity;
- (void) setApplicationNameForUserAgent:(NSString *) name;
- (void) setContinuousSpellCheckingEnabled:(BOOL) flag;
- (void) setCustomTextEncodingName:(NSString *) name;
- (void) setCustomUserAgent:(NSString *) agent;
- (void) setDownloadDelegate:(id) delegate;
- (void) setEditable:(BOOL) flag;
- (void) setEditingDelegate:(id) delegate;
- (void) setFrameLoadDelegate:(id) delegate;
- (void) setGroupName:(NSString *) str;
- (void) setHostWindow:(NSWindow *) window;
- (void) setMaintainsBackForwardList:(BOOL) flag;
- (void) setMediaStyle:(NSString *) style;
- (void) setPolicyDelegate:(id) delegate;
- (void) setPreferences:(id) /*(WebPreferences *)*/ prefs;
- (void) setPreferencesIdentifier:(NSString *) ident;
- (void) setResourceLoadDelegate:(id) delegate;
- (void) setSelectedDOMRange:(id) /*DOMRange *)*/ range affinity:(NSSelectionAffinity) affinity;
- (void) setSmartInsertDeleteEnabled:(BOOL) flag;
- (void) setTextSizeMultiplier:(float) multiplier;
- (void) setTypingStyle:/* (DOMCSSStyleDeclaration *) */ style;
- (void) setUIDelegate:(id) delegate;
- (void) showGuessPanel:(id) sender;
- (BOOL) smartInsertDeleteEnabled;
- (int) spellCheckerDocumentTag;
- (void) startSpeaking:(id) sender;
- (void) stopSpeaking:(id) sender;
- (NSString *) stringByEvaluatingJavaScriptFromString:(NSString *) script;
- (id) /*DOMCSSStyleDeclaration * */ styleDeclarationWithText:(NSString *) text;
- (BOOL) supportsTextEncoding;
- (float) textSizeMultiplier;
- (id) /*DOMCSSStyleDeclaration * */ typingStyle;
- (id) UIDelegate;
- (NSUndoManager *) undoManager;
- (NSString *) userAgentForURL:(NSURL *) URL;
- (id /*WebScriptObject * */) windowScriptObject;
- (void) writeElement:(NSDictionary *) element
  withPasteboardTypes:(NSArray *) types
         toPasteboard:(NSPasteboard *) pasteboard;
- (void) writeSelectionWithPasteboardTypes:(NSArray *) types
                              toPasteboard:(NSPasteboard *) pasteboard;

@end
#endif // _WEBVIEW_H_

