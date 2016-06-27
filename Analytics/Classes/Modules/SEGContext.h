//
//  SEGContext.h
//  Analytics
//
//  Created by Tony Xiao on 6/24/16.
//  Copyright © 2016 Segment. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SEGAnalyticsConfiguration;
@interface SEGContext : NSObject

@property (nonatomic, strong) SEGAnalyticsConfiguration *configuration;

- (instancetype)initWithConfiguration:(SEGAnalyticsConfiguration *)configuration;
- (NSDictionary *)liveContext;
- (NSDictionary *)staticContext;
- (void)addPushTokenToContext:(NSString *)pushToken;
- (void)addTraits:(NSDictionary *)traits;
- (void)reset;

@end
