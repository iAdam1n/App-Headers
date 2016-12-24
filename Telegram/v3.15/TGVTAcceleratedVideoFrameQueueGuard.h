/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSObject;

@interface TGVTAcceleratedVideoFrameQueueGuard : NSObject {

	/*^block*/id _draw;
	NSString* _path;
	NSObject* _key;

}

@property (nonatomic,retain) NSObject * key;              //@synthesize key=_key - In the implementation block
+(id)controlQueue;
+(void)removeGuardFromPath:(id)arg1 key:(id)arg2 ;
+(void)addGuardForPath:(id)arg1 guard:(id)arg2 ;
-(void)draw:(id)arg1 ;
-(id)initWithDraw:(/*^block*/id)arg1 path:(id)arg2 ;
-(void)dealloc;
-(NSObject *)key;
-(void)setKey:(NSObject *)arg1 ;
@end
