/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichStoryBlockAdapter.h>

@protocol FBQueriedDocumentElementFieldsProtocol;
@class NSDictionary, FBMemModelObject, FBRichStoryAdapterToolbox, NSString;

@interface FBDocumentElementStoryBlockAdapter : NSObject <FBRichStoryBlockAdapter> {

	NSDictionary* _annotations;
	FBMemModelObject*<FBQueriedDocumentElementFieldsProtocol> _documentElement;
	BOOL _supportsSharing;
	long long _layoutDirection;
	NSDictionary* _presentationAttributes;
	FBRichStoryAdapterToolbox* _toolbox;

}

@property (assign,nonatomic) long long layoutDirection;                                 //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (assign,nonatomic) BOOL supportsSharing;                                      //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (nonatomic,readonly) FBRichStoryAdapterToolbox * toolbox;                     //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(FBRichStoryAdapterToolbox *)toolbox;
-(id)initWithDocumentElement:(id)arg1 toolbox:(id)arg2 ;
-(NSDictionary *)presentationAttributes;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(id)viewModel;
-(id)annotations;
-(void)setSupportsSharing:(BOOL)arg1 ;
-(BOOL)supportsSharing;
@end

