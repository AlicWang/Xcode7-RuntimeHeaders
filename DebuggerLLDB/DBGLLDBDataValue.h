//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBDataValue : DBGDataValue
{
    BOOL _isDictionarySynthesizedParent;
    DBGLLDBDataType *_dbgStaticType;
    struct SBValue _lldbValueObject;
    int _lldbFormat;
    NSMutableArray *_childValues;
    NSString *_expr_path_str;
    NSArray *_classNameHierarchy;
    BOOL _requested_children;
    BOOL _requestedSummary;
    BOOL _summaryHasBeenFetched_mainThreadOnly;
    BOOL _requestedFullSummary;
    BOOL _fullSummaryHasBeenFetched_mainThreadOnly;
    BOOL _representsNilObjectiveCObject;
    BOOL _representsNullObjectPointer;
    BOOL _mightRespondToSelectors;
    BOOL _value_has_changed;
    BOOL _childValuesCountValid;
    BOOL _hasChildValues;
    BOOL _in_scope;
    NSString *_name;
    NSString *_value_str;
    NSString *_summary_str;
    NSString *_fullSummary;
    DBGDataValue *_parent;
    struct _NSRange _fetchRange;
}

+ (id)_dataValueWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;
+ (id)supportedDataValueFormats;
+ (int)dynamicValueType;
+ (id)_persistenceKeyForValueWithName:(id)arg1 inStackFrame:(id)arg2;
+ (int)_persistedLLDBFormatForValueName:(id)arg1 inStackFrame:(id)arg2;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property struct _NSRange fetchRange; // @synthesize fetchRange=_fetchRange;
- (id)staticType;
- (BOOL)inScope;
- (id)parent;
@property(copy, nonatomic) NSString *fullSummary; // @synthesize fullSummary=_fullSummary;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary_str;
- (BOOL)hasChildValues;
@property BOOL childValuesCountValid; // @synthesize childValuesCountValid=_childValuesCountValid;
- (BOOL)valueHasChanged;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)isMemoryFault;
- (id)_dataValueFormatForLLDBFormat:(int)arg1;
- (void)_persistLLDBFormat:(id)arg1;
- (id)_classNameHierarchyStartingWithType:(struct SBType)arg1;
- (void)classNameHierarchy:(CDUnknownBlockType)arg1;
- (void)ensureAllDisplayablePropertiesAreLoaded:(CDUnknownBlockType)arg1;
- (BOOL)mightRespondToSelectors;
- (BOOL)_calculateRepresentsNullObjectPointer;
- (BOOL)representsNullObjectPointer;
- (BOOL)_calculateRepresentsNilObjectiveCObject;
- (BOOL)representsNilObjectiveCObject;
- (void)watch;
- (BOOL)wantsToProvideSummary;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)description;
- (id)_lldbValueObjectDescription;
- (id)_lldbValueDescription;
- (id)lldbDescription;
- (void)setFormat:(id)arg1;
- (id)format;
- (const char *)valueAsCString;
- (void)rawDataWithHandler:(CDUnknownBlockType)arg1;
- (id)primitiveChildValues;
- (void)_faultNextSetOfChildValuesStartingAtIndex:(unsigned long long)arg1;
- (void)_setChildValuesToArrayOfPlaceholders;
- (void)_setChildValuesToArrayOfActualChildren;
- (void)_fetchChildValuesFromLLDBOnSessionThreadIfNecessary;
- (void)childWithName:(id)arg1 foundChild:(CDUnknownBlockType)arg2;
- (void)_setChildValuesWithKVO:(id)arg1;
- (id)childValues;
- (void)loadedFullSummary:(CDUnknownBlockType)arg1;
- (void)loadedSummary:(CDUnknownBlockType)arg1;
- (void)_fetchFullSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)_calculateSummaryForDictionaryElement;
- (id)_calculateSummary;
- (void)_fetchSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)value;
- (BOOL)dynamicTypeHasChanged;
- (BOOL)summaryHasChanged;
- (void)setValue:(id)arg1;
- (id)blockStartAddress;
- (id)expressionPath;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (id)_lldbSession;
- (BOOL)_isSessionThread;
- (void)_assertOnSessionThread;
- (id)lldbStackFrame;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3 updateSummary:(BOOL)arg4;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3;

@end