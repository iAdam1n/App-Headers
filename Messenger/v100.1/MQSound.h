/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface MQSound : NSObject {

	float __gapLength;
	float _preferredVolume;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                                                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                                             //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,setter=setLoopGapLength:,getter=getLoopGapLength,nonatomic) float loopGapLength; 
-(id)initWithName:(id)arg1 andVolume:(float)arg2 andExtension:(id)arg3 ;
-(id)initWithName:(id)arg1 andVolume:(float)arg2 andGapLength:(float)arg3 ;
-(id)initWithName:(id)arg1 andVolume:(float)arg2 ;
-(float)getLoopGapLength;
-(void)setLoopGapLength:(float)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(float)preferredVolume;
-(void)setPreferredVolume:(float)arg1 ;
@end
