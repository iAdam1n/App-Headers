/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECGroupLabelTableViewCell.h>

@class ECObserverSet;

@interface ECValidatingVehicleNumberFieldTableViewCell : ECGroupLabelTableViewCell {

	ECObserverSet* _lookupActionObservers;
	ECObserverSet* _changeObservers;
	/*^block*/id _requestHandler;
	/*^block*/id _requestCompletionHandler;

}

@property (nonatomic,retain) ECObserverSet * lookupActionObservers;              //@synthesize lookupActionObservers=_lookupActionObservers - In the implementation block
@property (nonatomic,retain) ECObserverSet * changeObservers;                    //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,copy) id requestHandler;                                    //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                          //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
+(double)preferredCellHeight;
-(void)displayError:(id)arg1 ;
-(ECObserverSet *)changeObservers;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(void)setLookupActionObservers:(ECObserverSet *)arg1 ;
-(void)setChangeObservers:(ECObserverSet *)arg1 ;
-(ECObserverSet *)lookupActionObservers;
-(id)dataDictionary;
-(void)restoreDataDictionary:(id)arg1 ;
-(id)requestCompletionHandler;
-(void)focus:(BOOL)arg1 ;
-(void)setRequestHandler:(id)arg1 ;
-(id)requestHandler;
@end
