/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TGPhotoEditorToolView <NSObject>
@property (assign,nonatomic) CGSize actualAreaSize; 
@property (nonatomic,copy) id titleChanged; 
@property (nonatomic,copy) id valueChanged; 
@property (nonatomic,retain) id value; 
@property (nonatomic,readonly) BOOL isTracking; 
@property (nonatomic,copy) id interactionEnded; 
@property (nonatomic,readonly) BOOL hideTitle; 
@property (assign,nonatomic) BOOL isLandscape; 
@property (assign,nonatomic) double toolbarLandscapeSize; 
@optional
-(void)setHistogramSignal:(id)arg1;

@required
-(double)toolbarLandscapeSize;
-(void)setInteractionEnded:(/*^block*/id)arg1;
-(void)setToolbarLandscapeSize:(double)arg1;
-(void)setValueChanged:(/*^block*/id)arg1;
-(id)valueChanged;
-(CGSize)actualAreaSize;
-(void)setActualAreaSize:(CGSize)arg1;
-(id)value;
-(void)setValue:(id)arg1;
-(BOOL)isTracking;
-(BOOL)buttonPressed:(BOOL)arg1;
-(id)titleChanged;
-(void)setTitleChanged:(/*^block*/id)arg1;
-(void)setIsLandscape:(BOOL)arg1;
-(id)interactionEnded;
-(BOOL)isLandscape;
-(BOOL)hideTitle;

@end
