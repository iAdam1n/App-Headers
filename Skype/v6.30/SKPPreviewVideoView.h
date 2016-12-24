/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SKPPreviewVideoView <NSObject>
@property (nonatomic,retain) id<NSObject> video; 
@property (nonatomic,readonly) CGSize videoSize; 
@property (assign,nonatomic) BOOL mirror; 
@property (assign,nonatomic) long long rotation; 
@property (nonatomic,readonly) BOOL hasVideoFrames; 
@property (nonatomic,retain) NSString * debugName; 
@required
-(BOOL)hasVideoFrames;
-(BOOL)mirror;
-(void)setMirror:(BOOL)arg1;
-(void)setRotation:(long long)arg1;
-(long long)rotation;
-(void)setVideo:(id)arg1;
-(CGSize)videoSize;
-(id<NSObject>)video;
-(void)setDebugName:(id)arg1;
-(NSString *)debugName;

@end
