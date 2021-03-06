/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTNativeTemplateDataModelMutatorListener.h>

@class CKComponent, NSString;

@interface NTNativeTemplateRootComponentDataModelMutatorListener : NSObject <NTNativeTemplateDataModelMutatorListener> {

	CKComponent* _component;

}

@property (assign,nonatomic,__weak) CKComponent * component;              //@synthesize component=_component - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataModelMutator:(id)arg1 removedIndexPaths:(id)arg2 insertedModels:(id)arg3 atIndices:(id)arg4 updatedModels:(id)arg5 atIndices:(id)arg6 isInitialLoad:(BOOL)arg7 ;
-(void)setComponent:(CKComponent *)arg1 ;
-(CKComponent *)component;
@end

