/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSDictionary;

@interface ECAPIUserProfileResponse : ECAPIResponseBase {

	NSDictionary* _userProfile;

}

@property (nonatomic,retain) NSDictionary * userProfile;              //@synthesize userProfile=_userProfile - In the implementation block
-(void)setUserProfile:(NSDictionary *)arg1 ;
-(NSDictionary *)userProfile;
-(void)parseData:(id)arg1 ;
@end

