/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBShareSheetTargetProtocol.h>

@class NSString;

@interface FBShareSheetSnacks : NSObject <FBShareSheetTargetProtocol> {

	NSString* _fbid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)targetIconViewWithSize:(double)arg1 ;
-(id)initWithFBID:(id)arg1 ;
-(id)targetDetailLabel;
-(unsigned long long)targetDetailIcon;
-(id)targetName;
@end
