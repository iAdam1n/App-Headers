/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, CAFilter, NSAttributedString, UIImage;

@interface SKUIItemOfferButtonProperties : NSObject {

	BOOL _hasBorderView;
	BOOL _hasTitleLabel;
	BOOL _universal;
	BOOL _progressIndeterminate;
	BOOL _cancelRecognizer;
	UIColor* _borderBackgroundColor;
	UIColor* _borderColor;
	CAFilter* _borderCompositingFilter;
	double _borderWidth;
	double _borderCornerRadius;
	NSAttributedString* _attributedText;
	UIColor* _textColor;
	long long _confirmationTitleStyle;
	long long _titleStyle;
	UIImage* _image;
	long long _progressType;
	double _progress;
	double _alpha;

}

@property (assign,nonatomic) BOOL hasBorderView;                              //@synthesize hasBorderView=_hasBorderView - In the implementation block
@property (nonatomic,retain) UIColor * borderBackgroundColor;                 //@synthesize borderBackgroundColor=_borderBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                           //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) CAFilter * borderCompositingFilter;              //@synthesize borderCompositingFilter=_borderCompositingFilter - In the implementation block
@property (assign,nonatomic) double borderWidth;                              //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double borderCornerRadius;                       //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasTitleLabel;                              //@synthesize hasTitleLabel=_hasTitleLabel - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;               //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL universal;                                  //@synthesize universal=_universal - In the implementation block
@property (assign,nonatomic) long long confirmationTitleStyle;                //@synthesize confirmationTitleStyle=_confirmationTitleStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                            //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long progressType;                          //@synthesize progressType=_progressType - In the implementation block
@property (assign,nonatomic) BOOL progressIndeterminate;                      //@synthesize progressIndeterminate=_progressIndeterminate - In the implementation block
@property (assign,nonatomic) double progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL cancelRecognizer;                           //@synthesize cancelRecognizer=_cancelRecognizer - In the implementation block
@property (assign,nonatomic) double alpha;                                    //@synthesize alpha=_alpha - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(void)setProgress:(double)arg1 ;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(double)progress;
-(void)setProgressType:(long long)arg1 ;
-(void)setUniversal:(BOOL)arg1 ;
-(long long)progressType;
-(BOOL)hasBorderView;
-(void)setHasBorderView:(BOOL)arg1 ;
-(UIColor *)borderBackgroundColor;
-(void)setBorderBackgroundColor:(UIColor *)arg1 ;
-(CAFilter *)borderCompositingFilter;
-(void)setBorderCompositingFilter:(CAFilter *)arg1 ;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
-(BOOL)hasTitleLabel;
-(void)setHasTitleLabel:(BOOL)arg1 ;
-(BOOL)universal;
-(long long)confirmationTitleStyle;
-(void)setConfirmationTitleStyle:(long long)arg1 ;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(BOOL)progressIndeterminate;
-(void)setProgressIndeterminate:(BOOL)arg1 ;
-(BOOL)cancelRecognizer;
-(void)setCancelRecognizer:(BOOL)arg1 ;
@end

