/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRCompositeFragmentController.h>

@class SRVerticalStackLayoutFragment;

@interface SRVerticalStackFragmentController : SRCompositeFragmentController {

	SRVerticalStackLayoutFragment* _verticalStackLayout;
	BOOL _hidden;
	BOOL _isInvisible;
	BOOL _ensureTallerThanBounds;

}

@property (assign,nonatomic) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL isInvisible;                         //@synthesize isInvisible=_isInvisible - In the implementation block
@property (assign,nonatomic) BOOL ensureTallerThanBounds;              //@synthesize ensureTallerThanBounds=_ensureTallerThanBounds - In the implementation block
-(id)initWithChildFragments:(id)arg1 paddingBetweenFragments:(double)arg2 ;
-(id)initWithChildFragments:(id)arg1 ;
-(id)layoutFragment;
-(CGRect)parentLevelBoundsOfChildBounds:(CGRect)arg1 forChildFragment:(unsigned long long)arg2 ;
-(void)updateLayoutUponChildChange;
-(BOOL)ensureTallerThanBounds;
-(void)setEnsureTallerThanBounds:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(BOOL)isInvisible;
-(void)setIsInvisible:(BOOL)arg1 ;
@end

