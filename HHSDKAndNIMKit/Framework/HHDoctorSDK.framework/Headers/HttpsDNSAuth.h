//
//  HttpsDNSAuth.h
//  HHDoctorSDK
//
//  Created by Shi Jian on 2018/8/9.
//

#import <UIKit/UIKit.h>

@interface HttpsDNSAuth : NSObject


//+ (void)sendRequest:(NSURLAuthenticationChallenge *)challenge request:(NSMutableURLRequest *)request;

+ (void)requestHost:(NSString *)host didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition, NSURLCredential *_Nullable))completionHandler;

@end
