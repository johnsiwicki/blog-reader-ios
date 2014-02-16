//
//  BlogPost.h
//  BlogRead
//
//  Created by John Siwicki on 2/15/14.
//  Copyright (c) 2014 Siwicadilly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic,strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;

- (id) initWithTitle:(NSString*)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;

- (NSString *) formattedDate;

@end
