/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECSearchField.h>

@class NSString;

@interface ECHomeSearchField : ECSearchField {

	NSString* _customPlaceHolderLocationString;

}

@property (nonatomic,copy) NSString * customPlaceHolderLocationString;              //@synthesize customPlaceHolderLocationString=_customPlaceHolderLocationString - In the implementation block
-(CGRect)rectWithBounds:(CGRect)arg1 ;
-(NSString *)customPlaceHolderLocationString;
-(id)customPlaceHolderWithLocationString:(id)arg1 ;
-(void)setCustomPlaceHolderLocationString:(NSString *)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
-(void)setupDefaults;
@end
