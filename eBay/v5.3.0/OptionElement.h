/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
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

