/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedFeedUnitFieldsProtocol;
@class NSDictionary, FBMemModelObject, NSArray, FBFeedSecondaryActionContext;

@interface FBFeedSecondaryActionSequence : NSObject {

	NSDictionary* _handlers;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	id _element;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _context;

}
-(id)generateAll;
-(id)initWithHandlers:(id)arg1 feedUnit:(id)arg2 element:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(BOOL)hasActions;
@end
