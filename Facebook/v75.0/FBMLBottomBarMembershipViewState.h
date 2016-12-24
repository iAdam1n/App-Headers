/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSArray;

@interface FBMLBottomBarMembershipViewState : NSObject {

	NSArray* _userStatusesToBeShown;
	long long _spillOverCount;
	CGRect _bounds;

}

@property (nonatomic,copy,readonly) NSArray * userStatusesToBeShown;              //@synthesize userStatusesToBeShown=_userStatusesToBeShown - In the implementation block
@property (nonatomic,readonly) long long spillOverCount;                          //@synthesize spillOverCount=_spillOverCount - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                     //@synthesize bounds=_bounds - In the implementation block
-(long long)spillOverCount;
-(NSArray *)userStatusesToBeShown;
-(id)initUserStatusIndicatorBarViewStateForBounds:(CGRect)arg1 userStatuses:(id)arg2 ;
-(CGRect)bounds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
