/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ECLocationSelectionConfiguration;


@protocol ECLocationSelectionProtocol <NSObject>
@property (nonatomic,readonly) ECLocationSelectionConfiguration * configuration; 
@property (copy) id completionHandler; 
@required
-(id)completionHandler;
-(void)setCompletionHandler:(/*^block*/id)arg1;
-(ECLocationSelectionConfiguration *)configuration;

@end

