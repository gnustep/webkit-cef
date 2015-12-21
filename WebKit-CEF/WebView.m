/*
   Project: WebKit-CEF

   Copyright (C) 2015 Free Software Foundation

   Author: Gregory John Casamento,,,

   Created: 2015-12-07 14:41:37 -0500 by heron

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

#import "WebView.h"

@implementation WebView
+ (BOOL) canShowMIMEType:(NSString *) type
{
  return NO;
}

+ (BOOL) canShowMIMETypeAsHTML:(NSString *) type
{
  return NO;
}

+ (NSArray *) MIMETypesShownAsHTML
{
  return nil;
}

+ (void) registerViewClass:(Class) class representationClass:(Class) repClass forMIMEType:(NSString *) type
{
  return;
}

+ (void) setMIMETypesShownAsHTML:(NSArray *) type
{
}

+ (NSURL *) URLFromPasteboard:(NSPasteboard *) pasteboard
{
  return nil;
}

+ (NSString *) URLTitleFromPasteboard:(NSPasteboard *) pasteboard
{
  return nil;
}

/* Actions */
- (IBAction) stopLoading:(id) sender
{
}

- (IBAction) goBack:(id) sender
{
}

- (IBAction) goForward:(id) sender
{
}

- (IBAction) makeTextLarger:(id) sender
{
}

- (IBAction) makeTextSmaller:(id) sender
{
}

- (IBAction) reload:(id) sender
{
}

- (IBAction) takeStringURLFrom:(id) sender // anything responding to -stringValue
{
}

/* Other methods */
- (void) alignCenter:(id) sender
{
}

- (void) alignJustified:(id) sender
{
}

- (void) alignLeft:(id) sender
{
}

- (void) alignRight:(id) sender
{
}

- (NSString *) applicationNameForUserAgent
{
  return @"";
}

- (void) applyStyle:(id) /* DOMCSSStyleDeclaration * */ style
{
}

- (id) /* WebBackForwardList * */ backForwardList
{
  return nil;
}

- (BOOL) canGoBack
{
  return YES;
}

- (BOOL) canGoForward
{
  return YES;
}

- (BOOL) canMakeTextLarger
{
  return YES;
}

- (BOOL) canMakeTextSmaller
{
  return YES;
}

- (void) changeAttributes:(id) sender
{
}

- (void) changeColor:(id) sender
{
}

- (void) changeDocumentBackgroundColor:(id) sender
{
}

- (void) changeFont:(id) sender
{
}

- (void) checkSpelling:(id) sender
{
}

- (id) /*DOMCSSStyleDeclaration * */ computedStyleForElement:(id) /*DOMElement */ element
                                       pseudoElement:(NSString *)pseudoElement
{
  return nil;
}
                                       
- (void) copy:(id) sender
{
}

- (void) copyFont:(id) sender
{
}

- (NSString *) customTextEncodingName
{
  return @"";
}

- (NSString *) customUserAgent
{
  return @"";
}

- (void) cut:(id) sender
{
}

- (void) delete:(id) sender
{
}

- (void) deleteSelection
{
}

- (id) downloadDelegate
{
  return nil;
}

- (id) /* DOMRange * */ editableDOMRangeForPoint:(NSPoint) point
{
  return nil;
}

- (id) editingDelegate
{
  return nil;
}

- (NSDictionary *) elementAtPoint:(NSPoint) point
{
  return nil;
}

- (double) estimatedProgress
{
  return 0.0;
}

- (id) frameLoadDelegate;	// uses informal WebFrameLoadDelegate protocol
{
  return nil;
}

- (BOOL) goBack
{
  return YES;
}

- (BOOL) goForward
{
  return YES;
}

- (BOOL) goToBackForwardItem: (id) /*(WebHistoryItem *)*/ item
{
  return YES;
}

- (NSString *) groupName
{
  return @"";
}

- (NSWindow *) hostWindow
{
  return [self window];
}

- (id) initWithFrame:(NSRect) rect frameName:(NSString *) name groupName:(NSString *) group
{
  return nil;
}

- (BOOL) isContinuousSpellCheckingEnabled
{
  return NO;
}

- (BOOL) isEditable
{
  return NO;
}

- (id) /* WebFrame * */ mainFrame
{
  return nil;
}

- (NSString *) mediaStyle
{
  return @"";
}

- (void) moveDragCaretToPoint:(NSPoint) point
{
}

- (void) paste:(id) sender
{
}

- (void) pasteAsPlainText:(id) sender
{
}

- (void) pasteAsRichText:(id) sender
{
}

- (NSArray *) pasteboardTypesForElement:(NSDictionary *) element
{
  return [NSArray array];
}

- (NSArray *) pasteboardTypesForSelection
{
  return [NSArray array];
}

- (void) pasteFont:(id) sender
{
}

- (void) performFindPanelAction:(id) sender
{
}

- (id) policyDelegate
{
  return nil;
}

- (id) /* WebPreferences * */ preferences
{
  return nil;
}

- (NSString *) preferencesIdentifier
{
  return @"";
}

- (void) removeDragCaret
{
}

- (void) replaceSelectionWithArchive: (id) /*(WebArchive *)*/ archive
{
}

- (void) replaceSelectionWithMarkupString:(NSString *) string
{
}

- (void) replaceSelectionWithNode:(id) /* (DOMNode *) */ node
{
}

- (void) replaceSelectionWithText:(NSString *) text
{
}

- (id) resourceLoadDelegate
{
  return nil;
}

- (BOOL) searchFor:(NSString *) string direction:(BOOL) forward caseSensitive:(BOOL) flag wrap:(BOOL) wrap
{
  return NO;
}

- (id) /* DOMRange * */ selectedDOMRange
{
  return nil;
}

- (NSSelectionAffinity) selectionAffinity
{
  return 0;
}

- (void) setApplicationNameForUserAgent:(NSString *) name
{
}

- (void) setContinuousSpellCheckingEnabled:(BOOL) flag
{
}

- (void) setCustomTextEncodingName:(NSString *) name
{
}

- (void) setCustomUserAgent:(NSString *) agent
{
}

- (void) setDownloadDelegate:(id) delegate
{
}

- (void) setEditable:(BOOL) flag
{
}

- (void) setEditingDelegate:(id) delegate
{
}

- (void) setFrameLoadDelegate:(id) delegate
{
}

- (void) setGroupName:(NSString *) str
{
}

- (void) setHostWindow:(NSWindow *) window
{
}

- (void) setMaintainsBackForwardList:(BOOL) flag;
{
}

- (void) setMediaStyle:(NSString *) style
{
}

- (void) setPolicyDelegate:(id) delegate
{
}

- (void) setPreferences:(id) /*(WebPreferences *)*/ prefs
{
}

- (void) setPreferencesIdentifier:(NSString *) ident
{
}

- (void) setResourceLoadDelegate:(id) delegate
{
}

- (void) setSelectedDOMRange:(id) /*DOMRange *)*/ range affinity:(NSSelectionAffinity) affinity
{
}

- (void) setSmartInsertDeleteEnabled:(BOOL) flag
{
}

- (void) setTextSizeMultiplier:(float) multiplier
{
}

- (void) setTypingStyle: (id) /* (DOMCSSStyleDeclaration *) */ style
{
}

- (void) setUIDelegate:(id) delegate
{
}

- (void) showGuessPanel:(id) sender
{
}

- (BOOL) smartInsertDeleteEnabled
{
  return NO;
}

- (int) spellCheckerDocumentTag
{
  return 0;
}

- (void) startSpeaking:(id) sender
{
}

- (void) stopSpeaking:(id) sender
{
}

- (NSString *) stringByEvaluatingJavaScriptFromString:(NSString *) script
{
  return @"";
}

- (id) /*DOMCSSStyleDeclaration * */ styleDeclarationWithText:(NSString *) text;
{
  return nil;
}

- (BOOL) supportsTextEncoding
{
  return YES;
}

- (float) textSizeMultiplier
{
  return 1.0;
}

- (id) /*DOMCSSStyleDeclaration * */ typingStyle
{
  return nil;
}

- (id) UIDelegate
{
  return nil;
}

- (NSUndoManager *) undoManager
{
  return nil;
}

- (NSString *) userAgentForURL:(NSURL *) URL
{
  return @"";
}

- (id /*WebScriptObject * */) windowScriptObject
{
  return nil;
}

- (void) writeElement:(NSDictionary *) element
  withPasteboardTypes:(NSArray *) types
         toPasteboard:(NSPasteboard *) pasteboard
{
}
         
- (void) writeSelectionWithPasteboardTypes:(NSArray *) types
                              toPasteboard:(NSPasteboard *) pasteboard
{
}

@end
