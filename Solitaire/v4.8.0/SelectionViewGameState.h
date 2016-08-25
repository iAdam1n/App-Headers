/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface SelectionViewGameState : NSObject {

	int _backgroundImageIndex;
	int _cardBackImageIndex;
	int _cardSpotImageIndex;
	int _cardFrontImageIndex;
	UIImage* _customBackgroundPort;
	UIImage* _customBackgroundLS;
	UIImage* _customCardBack;

}

@property (assign) int backgroundImageIndex;                    //@synthesize backgroundImageIndex=_backgroundImageIndex - In the implementation block
@property (assign) int cardBackImageIndex;                      //@synthesize cardBackImageIndex=_cardBackImageIndex - In the implementation block
@property (assign) int cardSpotImageIndex;                      //@synthesize cardSpotImageIndex=_cardSpotImageIndex - In the implementation block
@property (assign) int cardFrontImageIndex;                     //@synthesize cardFrontImageIndex=_cardFrontImageIndex - In the implementation block
@property (readonly) BOOL isCustomCardBack; 
@property (readonly) BOOL isCustomBackground; 
@property (retain) UIImage * customBackgroundPort;              //@synthesize customBackgroundPort=_customBackgroundPort - In the implementation block
@property (retain) UIImage * customBackgroundLS;                //@synthesize customBackgroundLS=_customBackgroundLS - In the implementation block
@property (retain) UIImage * customCardBack;                    //@synthesize customCardBack=_customCardBack - In the implementation block
-(void)setBackgroundImageIndex:(int)arg1 ;
-(void)setCardSpotImageIndex:(int)arg1 ;
-(void)setCardBackImageIndex:(int)arg1 ;
-(void)setCardFrontImageIndex:(int)arg1 ;
-(void)setCustomBackgroundPort:(UIImage *)arg1 ;
-(void)setCustomBackgroundLS:(UIImage *)arg1 ;
-(UIImage *)customBackgroundPort;
-(UIImage *)customBackgroundLS;
-(void)setCustomCardBack:(UIImage *)arg1 ;
-(UIImage *)customCardBack;
-(BOOL)isCustomBackground;
-(int)backgroundImageIndex;
-(BOOL)isCustomCardBack;
-(int)cardBackImageIndex;
-(int)cardFrontImageIndex;
-(int)cardSpotImageIndex;
-(id)init;
@end

