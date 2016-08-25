/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class ECFeatureProvider, ECFeature, ECFeatureBundleView, NSString;

@interface ECFeatureTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {

	ECFeatureProvider* _featureProvider;
	/*^block*/id _showDescriptionBlock;
	/*^block*/id _onSelectionChangedHandler;
	ECFeature* _featureBundle;
	ECFeatureBundleView* _sizingBundleView;

}

@property (nonatomic,retain) ECFeature * featureBundle;                           //@synthesize featureBundle=_featureBundle - In the implementation block
@property (nonatomic,retain) ECFeatureBundleView * sizingBundleView;              //@synthesize sizingBundleView=_sizingBundleView - In the implementation block
@property (nonatomic,retain) ECFeatureProvider * featureProvider;                 //@synthesize featureProvider=_featureProvider - In the implementation block
@property (copy) id showDescriptionBlock;                                         //@synthesize showDescriptionBlock=_showDescriptionBlock - In the implementation block
@property (copy) id onSelectionChangedHandler;                                    //@synthesize onSelectionChangedHandler=_onSelectionChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeatureBundle:(ECFeature *)arg1 ;
-(ECFeatureProvider *)featureProvider;
-(ECFeature *)featureBundle;
-(id)itemsInSection:(long long)arg1 ;
-(Class)featureCellClassForFeature:(id)arg1 ;
-(void)featureInfoAction:(id)arg1 ;
-(void)setFeatureProvider:(ECFeatureProvider *)arg1 ;
-(id)showDescriptionBlock;
-(id)cellForItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(ECFeatureBundleView *)sizingBundleView;
-(id)onSelectionChangedHandler;
-(void)selectFeature:(id)arg1 ;
-(void)setShowDescriptionBlock:(id)arg1 ;
-(void)setOnSelectionChangedHandler:(id)arg1 ;
-(void)setSizingBundleView:(ECFeatureBundleView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
@end

