//
//  AppiumInspectorDelegate.h
//  Appium
//
//  Created by Dan Cuellar on 3/13/13.
//  Copyright (c) 2013 Appium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebDriverElementNode.h"

@interface AppiumInspectorDelegate : NSObject {
@private

	IBOutlet NSBrowser *_browser;
	IBOutlet NSTextView *_detailsTextView;
	IBOutlet NSImageView *_screenshotView;
	IBOutlet NSView *_highlightView;
	WebDriverElementNode *_rootNode;
}

@end
