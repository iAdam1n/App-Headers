/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSString, NSMutableAttributedString, NSMutableString;

@interface EBULabelObject : NSObject {

	NSAttributedString* _attributedString;
	NSString* _accessibilityLabel;
	NSString* _accessibilityHint;
	unsigned long long _accessibilityTraits;

}

@property (nonatomic,retain) NSAttributedString * attributedString;                              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;                                      //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) NSString * accessibilityHint;                                       //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (assign,nonatomic) unsigned long long accessibilityTraits;                             //@synthesize accessibilityTraits=_accessibilityTraits - In the implementation block
@property (nonatomic,readonly) NSMutableAttributedString * mutableAttributedString; 
@property (nonatomic,readonly) NSMutableString * mutableAccessibilityLabel; 
@property (nonatomic,readonly) NSMutableString * mutableAccessibilityHint; 
+(id)labelObjectWithString:(id)arg1 attributes:(id)arg2 ;
+(id)labelObjectWithAttributedString:(id)arg1 ;
-(void)appendAccessibilityLabelString:(id)arg1 ;
-(NSMutableString *)mutableAccessibilityLabel;
-(NSMutableString *)mutableAccessibilityHint;
-(NSMutableAttributedString *)mutableAttributedString;
-(NSString *)accessibilityLabel;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)applyToLabel:(id)arg1 ;
@end

