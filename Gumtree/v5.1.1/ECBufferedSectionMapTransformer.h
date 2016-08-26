/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapTransformer.h>

@class ECSectionMap, ECObserverSet;

@interface ECBufferedSectionMapTransformer : ECSectionMapTransformer {

	BOOL _enabled;
	BOOL _isDirty;
	ECSectionMap* _originalSectionMap;
	ECObserverSet* _observers;

}

@property (assign,nonatomic) BOOL isDirty;                                   //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,retain) ECSectionMap * originalSectionMap;              //@synthesize originalSectionMap=_originalSectionMap - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) ECObserverSet * observers;                    //@synthesize observers=_observers - In the implementation block
-(void)setOriginalSectionMap:(ECSectionMap *)arg1 ;
-(void)setSectionMap:(id)arg1 ;
-(ECSectionMap *)originalSectionMap;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)transform;
-(ECObserverSet *)observers;
-(BOOL)isDirty;
-(void)setIsDirty:(BOOL)arg1 ;
-(id)initWithReceiver:(id)arg1 ;
@end
