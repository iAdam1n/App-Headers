/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/MKCollectionViewCell.h>

@class UILabel, MKImageView;

@interface SKPJoinCallChatCell : MKCollectionViewCell {

	UILabel* _label;
	MKImageView* _imageView;

}

@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MKImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(CGSize)sizeWhenConstrainedToWidth:(double)arg1 traitCollection:(id)arg2 ;
+(id)accessibilityHintForConversation:(id)arg1 ;
+(id)accessibilityLabelForConversation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MKImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(MKImageView *)arg1 ;
@end
