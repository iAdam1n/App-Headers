/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKGenericCommandDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@interface SKGenericCommand : NSObject {

	id<SKGenericCommandDelegate> delegate;

}

@property (assign,nonatomic) id<SKGenericCommandDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithResetUserProfileCmd:(id)arg1 ;
-(id)initWithLogRevisionCmd:(id)arg1 appId:(id)arg2 logContent:(id)arg3 delegate:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<SKGenericCommandDelegate>)arg1 ;
-(id<SKGenericCommandDelegate>)delegate;
@end

