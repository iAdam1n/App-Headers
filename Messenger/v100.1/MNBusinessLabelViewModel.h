/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface MNBusinessLabelViewModel : FBValueObject <NSCopying> {

	BOOL _takesMaxWidth;
	NSString* _text;
	UIColor* _textColor;
	UIFont* _textFont;
	long long _alignment;
	long long _maxNumberOfLines;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFont;                  //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,readonly) long long alignment;                     //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfLines;              //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL takesMaxWidth;                      //@synthesize takesMaxWidth=_takesMaxWidth - In the implementation block
-(long long)maxNumberOfLines;
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 maxNumberOfLines:(long long)arg5 takesMaxWidth:(BOOL)arg6 ;
-(BOOL)takesMaxWidth;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
@end
