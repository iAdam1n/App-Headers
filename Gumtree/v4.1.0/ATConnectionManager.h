/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATConnectionManager : NSObject {

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

