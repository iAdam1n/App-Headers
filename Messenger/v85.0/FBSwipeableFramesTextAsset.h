/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSAttributedString;

@interface FBSwipeableFramesTextAsset : FBValueObject <NSCopying> {

	UIImage* _image;
	NSAttributedString* _attributedText;
	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	double _horizontalMargin;
	double _verticalMargin;
	double _textBoxWidth;
	double _textBoxHeight;
	unsigned long long _horizontalAlignmentWithinTextBox;

}

@property (nonatomic,copy,readonly) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedText;                         //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignment;                           //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                             //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) double horizontalMargin;                                          //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) double verticalMargin;                                            //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,readonly) double textBoxWidth;                                              //@synthesize textBoxWidth=_textBoxWidth - In the implementation block
@property (nonatomic,readonly) double textBoxHeight;                                             //@synthesize textBoxHeight=_textBoxHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignmentWithinTextBox;              //@synthesize horizontalAlignmentWithinTextBox=_horizontalAlignmentWithinTextBox - In the implementation block
-(id)initWithImage:(id)arg1 attributedText:(id)arg2 horizontalAlignment:(unsigned long long)arg3 verticalAlignment:(unsigned long long)arg4 horizontalMargin:(double)arg5 verticalMargin:(double)arg6 textBoxWidth:(double)arg7 textBoxHeight:(double)arg8 horizontalAlignmentWithinTextBox:(unsigned long long)arg9 ;
-(double)horizontalMargin;
-(double)textBoxWidth;
-(double)textBoxHeight;
-(unsigned long long)horizontalAlignmentWithinTextBox;
-(UIImage *)image;
-(NSAttributedString *)attributedText;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(double)verticalMargin;
@end
