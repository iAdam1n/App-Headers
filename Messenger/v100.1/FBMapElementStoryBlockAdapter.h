/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@class NSDictionary, FBRichStoryEntityBlock, FBMemDocumentMapElement;

@interface FBMapElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	NSDictionary* _annotations;
	FBRichStoryEntityBlock* _block;
	FBMemDocumentMapElement* _mapElement;
	NSDictionary* _presentationAttributes;

}
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)presentationAttributes;
-(id)initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)viewModel;
-(id)annotations;
@end
