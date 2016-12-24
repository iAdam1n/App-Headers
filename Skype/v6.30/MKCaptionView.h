/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIToolbar.h>

@class MKCaptionViewStylesheet, MKPhoto, UILabel;

@interface MKCaptionView : UIToolbar {

	MKCaptionViewStylesheet* _stylesheet;
	MKPhoto* _photo;
	UILabel* _label;

}

@property (nonatomic,retain) MKCaptionViewStylesheet * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) MKPhoto * photo;                                   //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UILabel * label;                                   //@synthesize label=_label - In the implementation block
-(void)mk_commonInit;
-(void)setupCaption;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setPhoto:(MKPhoto *)arg1 ;
-(MKPhoto *)photo;
-(id)initWithPhoto:(id)arg1 ;
-(MKCaptionViewStylesheet *)stylesheet;
-(void)setStylesheet:(MKCaptionViewStylesheet *)arg1 ;
@end
