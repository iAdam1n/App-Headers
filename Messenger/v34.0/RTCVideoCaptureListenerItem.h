/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol RTCVideoCaptureFrameListener;
@interface RTCVideoCaptureListenerItem : NSObject {

	id<RTCVideoCaptureFrameListener> _frameListener;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _maxFPS;

}

@property (__weak) id<RTCVideoCaptureFrameListener> frameListener;              //@synthesize frameListener=_frameListener - In the implementation block
@property (assign,nonatomic) unsigned long long width;                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long maxFPS;                         //@synthesize maxFPS=_maxFPS - In the implementation block
-(void)setFrameListener:(id<RTCVideoCaptureFrameListener>)arg1 ;
-(void)setMaxFPS:(unsigned long long)arg1 ;
-(id)initWithListener:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 maxFPS:(unsigned long long)arg4 ;
-(id<RTCVideoCaptureFrameListener>)frameListener;
-(unsigned long long)maxFPS;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
@end
