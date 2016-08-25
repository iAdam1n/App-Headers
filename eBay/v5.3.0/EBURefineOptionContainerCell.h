/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/PreferencesNameValueCell.h>
#import <eBay/EBUAbstractController.h>

@class EBURefineOptionContainer, NSString, UIView, NSObject;

@interface EBURefineOptionContainerCell : PreferencesNameValueCell <EBUAbstractController> {

	EBURefineOptionContainer* _optonContainer;

}

@property (nonatomic,retain) EBURefineOptionContainer * optonContainer;              //@synthesize optonContainer=_optonContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSObject * model; 
-(EBURefineOptionContainer *)optonContainer;
-(void)setOptonContainer:(EBURefineOptionContainer *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)view;
-(NSObject *)model;
-(void)setModel:(NSObject *)arg1 ;
-(void)refreshView;
@end

