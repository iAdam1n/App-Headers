/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASVASTAd;

@interface ASVASTContainer : NSObject {

	BOOL _didFailoverAlready;
	ASVASTAd* _vastAd;

}

@property (nonatomic,retain) ASVASTAd * vastAd;                    //@synthesize vastAd=_vastAd - In the implementation block
@property (assign,nonatomic) BOOL didFailoverAlready;              //@synthesize didFailoverAlready=_didFailoverAlready - In the implementation block
-(ASVASTAd *)vastAd;
-(BOOL)didFailoverAlready;
-(void)setVastAd:(ASVASTAd *)arg1 ;
-(void)setDidFailoverAlready:(BOOL)arg1 ;
@end
