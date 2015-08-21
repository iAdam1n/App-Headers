/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSMutableDictionary, NSNumber;

@interface AdMarvelCloseButtonProperties : NSObject {

	NSMutableDictionary* closeButtonPositionsMap;
	BOOL _closeAreaRequired;
	BOOL _showDefaultCloseButton;
	BOOL _propertiesSetExplicitly;
	int _closeButtonPosition;
	NSNumber* _closeButtonX;
	NSNumber* _closeButtonY;
	NSNumber* _closeButtonWidth;
	NSNumber* _closeButtonHeight;
	UIEdgeInsets _imageEdgeInsets;

}

@property (nonatomic,retain) NSNumber * closeButtonX;                                                      //@synthesize closeButtonX=_closeButtonX - In the implementation block
@property (nonatomic,retain) NSNumber * closeButtonY;                                                      //@synthesize closeButtonY=_closeButtonY - In the implementation block
@property (nonatomic,retain) NSNumber * closeButtonWidth;                                                  //@synthesize closeButtonWidth=_closeButtonWidth - In the implementation block
@property (nonatomic,retain) NSNumber * closeButtonHeight;                                                 //@synthesize closeButtonHeight=_closeButtonHeight - In the implementation block
@property (assign,nonatomic) int closeButtonPosition;                                                      //@synthesize closeButtonPosition=_closeButtonPosition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets;                                                 //@synthesize imageEdgeInsets=_imageEdgeInsets - In the implementation block
@property (assign,getter=isCloseAreaRequired,nonatomic) BOOL closeAreaRequired;                            //@synthesize closeAreaRequired=_closeAreaRequired - In the implementation block
@property (assign,getter=shouldShowDefaultCloseButton,nonatomic) BOOL showDefaultCloseButton;              //@synthesize showDefaultCloseButton=_showDefaultCloseButton - In the implementation block
@property (assign,nonatomic) BOOL propertiesSetExplicitly;                                                 //@synthesize propertiesSetExplicitly=_propertiesSetExplicitly - In the implementation block
-(NSNumber *)closeButtonWidth;
-(NSNumber *)closeButtonHeight;
-(BOOL)isCloseAreaRequired;
-(BOOL)shouldShowDefaultCloseButton;
-(BOOL)propertiesSetExplicitly;
-(void)setCloseButtonX:(NSNumber *)arg1 ;
-(void)setCloseButtonY:(NSNumber *)arg1 ;
-(void)setCloseButtonWidth:(NSNumber *)arg1 ;
-(void)setCloseButtonHeight:(NSNumber *)arg1 ;
-(int)getAdMarvelCloseButtonPositionFromString:(id)arg1 ;
-(void)setCloseButtonPosition:(int)arg1 ;
-(void)setCloseAreaRequired:(BOOL)arg1 ;
-(void)setShowDefaultCloseButton:(BOOL)arg1 ;
-(void)setPropertiesSetExplicitly:(BOOL)arg1 ;
-(int)closeButtonPosition;
-(NSNumber *)closeButtonX;
-(NSNumber *)closeButtonY;
-(id)getAdMarvelCloseButtonPositionStringFromPosition:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(UIEdgeInsets)imageEdgeInsets;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
@end

