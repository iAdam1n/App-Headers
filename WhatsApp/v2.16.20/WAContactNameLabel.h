/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UILabel.h>

@class NSString, NSAttributedString, UIFont;

@interface WAContactNameLabel : UILabel {

	NSString* _originalText;
	NSAttributedString* _normalText;
	NSAttributedString* _highlightedText;
	BOOL _reverseNameSearch;
	NSString* _highlightedPart;
	UIFont* _nameFont;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * highlightedPart;              //@synthesize highlightedPart=_highlightedPart - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                     //@synthesize nameFont=_nameFont - In the implementation block
@property (assign,nonatomic) BOOL reverseNameSearch;                //@synthesize reverseNameSearch=_reverseNameSearch - In the implementation block
-(void)setText:(id)arg1 highlightedPart:(id)arg2 ;
-(BOOL)reverseNameSearch;
-(void)setReverseNameSearch:(BOOL)arg1 ;
-(void)recreateAttrubutedString;
-(NSString *)highlightedPart;
-(void)setHighlightedPart:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(UIFont *)nameFont;
-(void)setNameFont:(UIFont *)arg1 ;
@end
