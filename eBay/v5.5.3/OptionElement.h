/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OptionElement : NSObject {

	BOOL _cellEnabled;
	NSString* _optionName;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * optionName;               //@synthesize optionName=_optionName - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign) BOOL cellEnabled;                            //@synthesize cellEnabled=_cellEnabled - In the implementation block
-(NSString *)optionName;
-(void)setOptionName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(BOOL)cellEnabled;
@end
