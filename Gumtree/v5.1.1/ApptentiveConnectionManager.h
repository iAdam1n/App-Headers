/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ApptentiveConnectionManager : NSObject {

	NSMutableDictionary* channels;

}
+(id)sharedSingleton;
-(void)cancelConnection:(id)arg1 inChannel:(id)arg2 ;
-(void)addConnection:(id)arg1 toChannel:(id)arg2 ;
-(id)channelForName:(id)arg1 ;
-(void)cancelAllConnectionsInChannel:(id)arg1 ;
-(void)setMaximumActiveConnections:(long long)arg1 forChannel:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
@end

