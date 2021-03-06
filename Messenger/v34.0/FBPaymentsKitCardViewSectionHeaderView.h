/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, UIImage, NSAttributedString, NSString;

@interface FBPaymentsKitCardViewSectionHeaderView : UIView {

	UIImageView* _imageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _errorDescriptionTextView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle; 
@property (nonatomic,copy) NSString * errorDescription; 
+(double)heightForWidth:(double)arg1 image:(id)arg2 attributedTitle:(id)arg3 attributeSubtitle:(id)arg4 errorDescription:(id)arg5 ;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(UIImage *)image;
-(NSAttributedString *)attributedTitle;
-(void)setErrorDescription:(NSString *)arg1 ;
-(NSString *)errorDescription;
@end

