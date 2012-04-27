//
//  WTClient.h
//  WeTongji
//
//  Created by 紫川 王 on 12-4-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

@class WTClient;

typedef void (^WTCompletionBlock)(WTClient *client);

@interface WTClient : NSObject <ASIHTTPRequestDelegate> {
    WTCompletionBlock _completionBlock;
}

@property (nonatomic, assign) BOOL hasError;
@property (nonatomic, copy) NSString* errorDesc;
// Status code generated by server side application
@property (nonatomic, assign) int responseStatusCode;
// NSDictionary or NSArray
@property (nonatomic, retain) id responseJSONObject;

- (void)setCompletionBlock:(void (^)(WTClient* client))completionBlock;
- (WTCompletionBlock)completionBlock;
// return an autoreleased object, while gets released after one of following calls complete
+ (id)client;

- (void)getActivitesWithChannelIds:(NSString *)channelStatusStr page:(NSInteger)page;

@end
