/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class NSString;

@interface SoundChannel : NSObject {

	unsigned source;
	set<id, std::__1::less<id>, std::__1::allocator<id> >* delegates;
	int lastState;
	BOOL looping;
	BOOL isPlaying;
	BOOL reserved;
	float x;
	float y;
	float z;
	float velocityX;
	float velocityY;
	float velocityZ;
	float volume;
	float pitch;
	float distanceCutoff;
	int buffer;
	int state;
	float percentComplete;
	NSString* currentFilePath;

}

@property (assign,nonatomic) float x; 
@property (assign,nonatomic) float y; 
@property (assign,nonatomic) float z; 
@property (assign,nonatomic) float velocityX; 
@property (assign,nonatomic) float velocityY; 
@property (assign,nonatomic) float velocityZ; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) BOOL looping; 
@property (assign,nonatomic) float distanceCutoff; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) float percentComplete; 
@property (nonatomic,readonly) int buffer; 
@property (assign,nonatomic) BOOL reserved; 
@property (nonatomic,retain) NSString * currentFilePath; 
-(float)velocityX;
-(float)velocityY;
-(float)velocityZ;
-(void)setVelocityX:(float)arg1 ;
-(void)setVelocityY:(float)arg1 ;
-(void)setVelocityZ:(float)arg1 ;
-(BOOL)loadSoundFile:(id)arg1 ;
-(void)setPositionX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)setVelocityX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)setDistanceCutoff:(float)arg1 ;
-(void)removeAllDelegates;
-(BOOL)looping;
-(float)distanceCutoff;
-(void)setReserved:(BOOL)arg1 ;
-(BOOL)reserved;
-(void)dealloc;
-(id)init;
-(float)percentComplete;
-(int)state;
-(void)stop;
-(void)update;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
-(void)pause;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSString *)currentFilePath;
-(void)setCurrentFilePath:(NSString *)arg1 ;
-(int)buffer;
-(void)setLooping:(BOOL)arg1 ;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)rewind;
-(float)volume;
@end

