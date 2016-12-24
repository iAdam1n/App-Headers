/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSURL;

@interface FBMessageListIntentTarget : FBIntentTarget {

	NSString* _source;

}

@property (nonatomic,readonly) NSURL * messengerRedirectURL; 
@property (nonatomic,copy,readonly) NSString * source;                    //@synthesize source=_source - In the implementation block
+(id)messageListIntentTargetWithSource:(id)arg1 ;
-(id)fallbackURLs;
-(NSURL *)messengerRedirectURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)source;
@end
