/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUDebugCellBase.h>

@class UIButton, EBNDomainSettings_Metadata;

@interface EBUDebugCellDCS : EBUDebugCellBase {

	UIButton* _dcsInfoButton;
	EBNDomainSettings_Metadata* _metadata;

}

@property (retain) EBNDomainSettings_Metadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)initWithType:(unsigned)arg1 forSetting:(id)arg2 ;
-(BOOL)isInCategory:(id)arg1 ;
-(BOOL)matchesSearchString:(id)arg1 ;
-(void)dcsInfoButtonHit;
-(void)layoutSubviews;
-(EBNDomainSettings_Metadata *)metadata;
-(void)setMetadata:(EBNDomainSettings_Metadata *)arg1 ;
@end
