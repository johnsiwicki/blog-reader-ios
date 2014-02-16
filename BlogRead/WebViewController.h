//
//  WebViewController.h
//  BlogRead
//
//  Created by John Siwicki on 2/16/14.
//  Copyright (c) 2014 Siwicadilly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
