/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTNativeTemplateGlobalDataModelMutator
@required
-(id)componentForID:(id)arg1;
-(void)appendChildren:(id)arg1 toTemplateWithId:(id)arg2;
-(void)prependChildren:(id)arg1 toTemplateWithId:(id)arg2;
-(void)insertTemplateModels:(id)arg1 afterTemplateWithId:(id)arg2;
-(void)insertTemplateModels:(id)arg1 beforeTemplateWithId:(id)arg2;
-(void)replaceTemplateModels:(id)arg1 forTemplateWithId:(id)arg2;
-(void)removeTemplateModelWithTemplateWithId:(id)arg1;
-(void)setAttributes:(id)arg1 forKeys:(id)arg2 onTemplateWithId:(id)arg3;
-(void)nilAttributesWithNames:(id)arg1 onTemplateWithId:(id)arg2;
-(void)addMutator:(id)arg1 forID:(id)arg2;
-(void)beginUpdates;
-(void)endUpdates;

@end
