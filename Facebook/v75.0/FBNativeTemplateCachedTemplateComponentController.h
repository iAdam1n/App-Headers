/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/NTNativeTemplateContextScopedDataModelMutatorListener.h>

@class NSDictionary, NSString;

@interface FBNativeTemplateCachedTemplateComponentController : CKComponentController <NTNativeTemplateContextScopedDataModelMutatorListener> {

	NSDictionary* _currentModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithComponent:(id)arg1 ;
-(void)setupMutatorListener;
-(void)dataModelMutator:(id)arg1 removedIndexPaths:(id)arg2 insertedModels:(id)arg3 atIndices:(id)arg4 updatedModels:(id)arg5 atIndices:(id)arg6 isInitialLoad:(BOOL)arg7 ;
@end
