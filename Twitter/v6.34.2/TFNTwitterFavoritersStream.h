/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterUsersStream.h>

@interface TFNTwitterFavoritersStream : TFNTwitterUsersStream {

	long long _statusID;

}

@property (nonatomic,readonly) long long statusID;              //@synthesize statusID=_statusID - In the implementation block
-(long long)statusID;
-(id)initWithAccount:(id)arg1 statusID:(long long)arg2 ;
-(unsigned long long)_userCount;
-(void)_didReceiveResponseObject:(id)arg1 top:(BOOL)arg2 ;
-(void)_loadTopWithRequest:(id)arg1 ;
-(void)_loadBottomWithRequest:(id)arg1 ;
@end

