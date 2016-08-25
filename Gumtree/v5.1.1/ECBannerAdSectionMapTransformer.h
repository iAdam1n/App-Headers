/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapTransformer.h>

@class ECBannerMetadata, ECBannerProvider;

@interface ECBannerAdSectionMapTransformer : ECSectionMapTransformer {

	BOOL _enabled;
	ECBannerMetadata* _bannerMetadata;
	ECBannerProvider* _bannerProvider;

}

@property (nonatomic,retain) ECBannerMetadata * bannerMetadata;              //@synthesize bannerMetadata=_bannerMetadata - In the implementation block
@property (nonatomic,retain) ECBannerProvider * bannerProvider;              //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
-(void)setBannerProvider:(ECBannerProvider *)arg1 ;
-(ECBannerProvider *)bannerProvider;
-(id)initWithBannerProvider:(id)arg1 receiver:(id)arg2 ;
-(ECBannerMetadata *)bannerMetadata;
-(void)setBannerMetadata:(ECBannerMetadata *)arg1 ;
-(id)metadataForPage:(id)arg1 bannerType:(unsigned long long)arg2 ;
-(id)metadataForPage:(id)arg1 ;
-(id)sectionMap;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

