/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIUserAlertsRequest : ECAPIRequestBase {

	NSString* _userID;

}

@property (nonatomic,retain) NSString * userID;              //@synthesize userID=_userID - In the implementation block
-(void)setUserID:(NSString *)arg1 ;
-(id)command;
-(id)init;
-(NSString *)userID;
@end

