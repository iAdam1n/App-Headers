/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface CrossPromotedAppInfo : ModelObject {

	int _appId;
	NSString* _appHandler;

}

@property (assign,nonatomic) int appId;                          //@synthesize appId=_appId - In the implementation block
@property (nonatomic,retain) NSString * appHandler;              //@synthesize appHandler=_appHandler - In the implementation block
-(BOOL)launchable;
-(NSString *)appHandler;
-(void)setAppHandler:(NSString *)arg1 ;
-(void)dealloc;
-(int)appId;
-(void)setAppId:(int)arg1 ;
@end

