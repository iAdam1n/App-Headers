/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSURL;

@interface FBThirdPartyAppIntentTarget : FBIntentTarget {

	NSURL* _targetURL;

}

@property (nonatomic,copy,readonly) NSURL * targetURL;              //@synthesize targetURL=_targetURL - In the implementation block
+(id)thirdPartyAppTargetWithNativeURL:(id)arg1 ;
-(id)fallbackURLs;
-(NSURL *)targetURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

